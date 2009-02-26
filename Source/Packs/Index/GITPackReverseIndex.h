//
//  GITPackReverseIndex.h
//  CocoaGit
//
//  Created by Brian Chapados on 2/16/09.
//  Copyright 2009 Brian Chapados. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GITPackIndex.h"

@interface GITPackReverseIndex : NSObject {
    GITPackIndex *index;
    NSArray *offsets;
    NSArray *indexMap;
}
@property (nonatomic, assign) GITPackIndex *index;
@property (nonatomic, copy) NSArray *offsets;
@property (nonatomic, copy) NSArray *indexMap;

- (id) initWithPackIndex:(GITPackIndex *)packIndex;
- (NSUInteger) indexWithOffset:(NSUInteger)offset;
- (NSUInteger) nextOffsetWithOffset:(NSUInteger)thisOffset;
@end
