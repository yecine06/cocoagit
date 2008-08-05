//
//  GITObject.h
//  CocoaGit
//
//  Created by Geoffrey Garside on 29/06/2008.
//  Copyright 2008 ManicPanda.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

extern const NSString * kGITObjectsDirectoryRoot;

@interface GITObject : NSObject {
    NSString * sha1;     //!< Stores the SHA1 of objects committed to the file system
    NSString * type;     //!< Stores the parsed type of the object
    NSUInteger size;     //!< Stores the content size of the data portion of the object
}

#pragma mark -
#pragma mark Read-only Properties
@property(readonly,retain) NSString * sha1;
@property(readonly,retain) NSString * type;
@property(readonly,assign) NSUInteger size;

#pragma mark -
#pragma mark Class Methods
+ (NSString*)objectPathFromHash:(NSString*)theHash;

#pragma mark -
#pragma mark Instance Methods
- (id)initWithHash:(NSString*)objectHash;
- (id)initType:(NSString*)expectedType withHash:(NSString*)objectHash;
- (NSString*)objectPath;
- (void)loadContentFromData:(NSData*)data;
- (NSData*)dataContentOfObject;

@end
