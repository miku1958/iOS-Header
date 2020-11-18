//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NFCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol FCContentContext, NTSectionDescriptor, NTTodayItem, NTTodayResultOperationInfoProviding;

@protocol NTTodayProtoitem <NFCopying>

@property (readonly, copy, nonatomic) NSString *identifier;

- (NSArray *)assetHandlesWithOperationInfo:(id<NTTodayResultOperationInfoProviding>)arg1 forLeadingCellAppearance:(BOOL)arg2;
- (id<NTTodayItem>)itemWithContentContext:(id<FCContentContext>)arg1 operationInfo:(id<NTTodayResultOperationInfoProviding>)arg2 sectionDescriptor:(id<NTSectionDescriptor>)arg3 assetFileURLsByRemoteURL:(NSMutableDictionary *)arg4 forLeadingCellAppearance:(BOOL)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;
@end

