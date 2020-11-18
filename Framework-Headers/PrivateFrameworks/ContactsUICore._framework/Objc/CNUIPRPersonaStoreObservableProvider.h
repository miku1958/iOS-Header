//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSNumberFormatter, PRPersonaStore;
@protocol CNScheduler;

@interface CNUIPRPersonaStoreObservableProvider : NSObject
{
    NSNumberFormatter *_numberFormatter;
    PRPersonaStore *_personaStore;
    CNContactStore *_contactStore;
    id<CNScheduler> _scheduler;
}

@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (strong, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property (strong, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property (strong, nonatomic) id<CNScheduler> scheduler; // @synthesize scheduler=_scheduler;

+ (id)_normalizedStringForPhoneNumberString:(id)arg1;
- (void).cxx_destruct;
- (id)disambiguationObservableForLikenessObservables:(id)arg1;
- (id)initWithPersonaStore:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;
- (BOOL)isMeContact:(id)arg1;
- (id)likenessObservableForContact:(id)arg1;
- (id)likenessObservableForContactFuture:(id)arg1;
- (id)likenessObservableForMe;
- (id)observableForEmail:(id)arg1;
- (id)observableForPhoneNumber:(id)arg1;

@end

