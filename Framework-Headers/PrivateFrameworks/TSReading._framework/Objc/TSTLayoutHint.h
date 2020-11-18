//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCoding-Protocol.h>
#import <TSReading/TSDHint-Protocol.h>

@class NSNumber, NSString, TSTLayout;

@interface TSTLayoutHint : NSObject <TSDHint, NSCoding>
{
    BOOL mIsValid;
    BOOL mHorizontal;
    CDStruct_5f1f7aa9 mCellRange;
    CDStruct_0441cfb5 mCacheHintID;
    NSNumber *mPartitioningPass;
    unsigned int mPartitionPosition;
    struct CGSize mMaximumSize;
    struct CGSize mEffectiveSize;
    TSTLayout *mLayout;
}

@property (nonatomic) CDStruct_0441cfb5 cacheHintID; // @synthesize cacheHintID=mCacheHintID;
@property (nonatomic) CDStruct_5f1f7aa9 cellRange; // @synthesize cellRange=mCellRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize effectiveSize; // @synthesize effectiveSize=mEffectiveSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL horizontal; // @synthesize horizontal=mHorizontal;
@property (nonatomic) BOOL isValid; // @synthesize isValid=mIsValid;
@property (nonatomic) TSTLayout *layout; // @synthesize layout=mLayout;
@property (nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=mMaximumSize;
@property (nonatomic) unsigned int partitionPosition; // @synthesize partitionPosition=mPartitionPosition;
@property (strong, nonatomic) NSNumber *partitioningPass; // @synthesize partitioningPass=mPartitioningPass;
@property (readonly) Class superclass;

+ (Class)archivedHintClass;
- (id)copyForArchiving;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)firstChildHint;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(CDStruct_5f1f7aa9)arg1 hintId:(CDStruct_0441cfb5)arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize)arg4 effectiveSize:(struct CGSize)arg5 layout:(id)arg6 validity:(BOOL)arg7 horizontal:(BOOL)arg8;
- (void)invalidate;
- (BOOL)isFirstHint;
- (id)lastChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelection:(id)arg1;
- (oneway void)release;

@end

