//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCoding-Protocol.h>
#import <TSReading/TSDHint-Protocol.h>

@class NSString;

@interface TSDDefaultHint : NSObject <TSDHint, NSCoding>
{
    struct CGRect mBounds;
    unsigned long long mEdges;
}

@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long edges; // @synthesize edges=mEdges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)archivedHintClass;
- (id)copyForArchiving;
- (void)encodeWithCoder:(id)arg1;
- (id)firstChildHint;
- (id)initWithBounds:(struct CGRect)arg1 edges:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isLastPartitionHorizontally:(BOOL)arg1;
- (id)lastChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelection:(id)arg1;

@end

