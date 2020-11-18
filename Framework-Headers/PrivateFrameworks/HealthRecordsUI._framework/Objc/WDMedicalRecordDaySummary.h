//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/WDMedicalRecordSummaryDelegate-Protocol.h>

@class HRProfile, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, WDMedicalRecordDaySummaryDelegate;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordDaySummary : NSObject <WDMedicalRecordSummaryDelegate>
{
    NSMutableDictionary *_categoriesBySourceAlphaOrdered;
    NSMutableDictionary *_categoriesBySourceByType;
    NSMutableSet *_inProgressCatogorySummaries;
    id<WDMedicalRecordDaySummaryDelegate> _delegate;
    HRProfile *_profile;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    long long _style;
}

@property (strong, nonatomic) NSMutableDictionary *categoriesBySourceAlphaOrdered; // @synthesize categoriesBySourceAlphaOrdered=_categoriesBySourceAlphaOrdered;
@property (strong, nonatomic) NSMutableDictionary *categoriesBySourceByType; // @synthesize categoriesBySourceByType=_categoriesBySourceByType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WDMedicalRecordDaySummaryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *inProgressCatogorySummaries; // @synthesize inProgressCatogorySummaries=_inProgressCatogorySummaries;
@property (readonly, nonatomic) long long numberOfDisplayItems;
@property (strong, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alphaSortedCategories:(id)arg1;
- (id)_alphaSortedKeysForCategories:(id)arg1;
- (void)addMedicalRecord:(id)arg1;
- (id)displayItemAtIndex:(long long)arg1;
- (id)initWithProfile:(id)arg1 style:(long long)arg2 delegate:(id)arg3;
- (void)recomputeIfNeeded;
- (void)summaryDidFinishRecompute:(id)arg1;

@end
