//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/_TtC13CoreKnowledge17CKSQLBackingStore.h>

@class NSString;

@interface _TtC13CoreKnowledge22CKCloudKitBackingStore : _TtC13CoreKnowledge17CKSQLBackingStore
{
}

@property (nonatomic, copy) NSString *name;

+ (id)mainInstance;
- (void)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dropLinksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dropLinksWithLabel:(id)arg1 from:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1;
- (void)removeAllValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeValueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeValuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeValuesMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)triplesComponentsMatching:(id)arg1 error:(id *)arg2;
- (id)writeBatch;

@end

