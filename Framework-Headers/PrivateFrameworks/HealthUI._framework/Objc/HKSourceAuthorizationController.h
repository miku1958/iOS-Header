//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKSource, NSArray, NSDictionary, NSMutableSet, NSSet;
@protocol HKSourceAuthorizationControllerDelegate;

@interface HKSourceAuthorizationController : NSObject
{
    BOOL _isUpdatingAllTypes;
    HKHealthStore *_healthStore;
    HKSource *_source;
    id<HKSourceAuthorizationControllerDelegate> _delegate;
    NSArray *_orderedTypesForSharing;
    NSArray *_orderedTypesForReading;
    NSMutableSet *_typesEnabledForSharing;
    NSMutableSet *_typesEnabledForReading;
    NSSet *_requestedTypesForSharing;
    NSSet *_requestedTypesForReading;
    NSDictionary *_requestedDocumentAuths;
}

@property (weak, nonatomic) id<HKSourceAuthorizationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (nonatomic) BOOL isUpdatingAllTypes; // @synthesize isUpdatingAllTypes=_isUpdatingAllTypes;
@property (strong, nonatomic) NSArray *orderedTypesForReading; // @synthesize orderedTypesForReading=_orderedTypesForReading;
@property (strong, nonatomic) NSArray *orderedTypesForSharing; // @synthesize orderedTypesForSharing=_orderedTypesForSharing;
@property (strong, nonatomic) NSDictionary *requestedDocumentAuths; // @synthesize requestedDocumentAuths=_requestedDocumentAuths;
@property (strong, nonatomic) NSSet *requestedTypesForReading; // @synthesize requestedTypesForReading=_requestedTypesForReading;
@property (strong, nonatomic) NSSet *requestedTypesForSharing; // @synthesize requestedTypesForSharing=_requestedTypesForSharing;
@property (readonly, nonatomic) HKSource *source; // @synthesize source=_source;
@property (strong, nonatomic) NSMutableSet *typesEnabledForReading; // @synthesize typesEnabledForReading=_typesEnabledForReading;
@property (strong, nonatomic) NSMutableSet *typesEnabledForSharing; // @synthesize typesEnabledForSharing=_typesEnabledForSharing;

- (void).cxx_destruct;
- (long long)_authorizationStatusWithType:(id)arg1;
- (id)_enabledSubTypesForType:(id)arg1 inSection:(long long)arg2;
- (id)_enabledTypesInSection:(long long)arg1;
- (BOOL)_parentTypeDisabledForType:(id)arg1 inSection:(long long)arg2;
- (void)_reloadDocumentAuthorizationRecords;
- (void)_reloadTypeAuthorizationRecords;
- (void)_setAuthorizationStatuses:(id)arg1;
- (id)_sortedTypes:(id)arg1;
- (void)_updateAuthorizationStatusWithTypes:(id)arg1;
- (BOOL)allTypesEnabled;
- (BOOL)anyTypeEnabled;
- (void)commitAuthorizationStatuses;
- (void)commitObjectAuthorizationStatuses:(id)arg1;
- (unsigned long long)countOfTypesInSection:(long long)arg1;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2 typesForSharing:(id)arg3 typesForReading:(id)arg4;
- (BOOL)isRequestingDocumentAuthorization;
- (BOOL)isTypeEnabled:(id)arg1 inSection:(long long)arg2;
- (id)objectAuthorizationStatusesForDocuments;
- (void)reload;
- (void)resetObjectAuthorizationStatuses;
- (void)setEnabled:(BOOL)arg1 forAllTypesInSection:(long long)arg2 commit:(BOOL)arg3;
- (void)setEnabled:(BOOL)arg1 forType:(id)arg2 inSection:(long long)arg3 commit:(BOOL)arg4;
- (id)typesInSection:(long long)arg1;

@end

