//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNiOSABPredicateRunner, CNiOSAddressBook, NSURL;
@protocol CNContactsLoggerProvider, CNSchedulerProvider, SGSuggestionsServiceContactsProtocol;

@interface CNContactsEnvironment : NSObject
{
    CNiOSAddressBook *_addressBook;
    id<CNSchedulerProvider> _schedulerProvider;
    NSURL *_baseURL;
    id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
    CNiOSABPredicateRunner *_abPredicateRunner;
    id<CNContactsLoggerProvider> _loggerProvider;
}

@property (strong, nonatomic) CNiOSABPredicateRunner *abPredicateRunner; // @synthesize abPredicateRunner=_abPredicateRunner;
@property (readonly, nonatomic) CNiOSAddressBook *addressBook;
@property (copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, nonatomic) id<CNContactsLoggerProvider> loggerProvider; // @synthesize loggerProvider=_loggerProvider;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (strong, nonatomic) id<SGSuggestionsServiceContactsProtocol> suggestionsService; // @synthesize suggestionsService=_suggestionsService;
@property (readonly, nonatomic) BOOL useInMemoryStores;

+ (id)baseURLWithDataLocationName:(id)arg1;
+ (id)currentEnvironment;
+ (id)inMemoryURL;
+ (BOOL)supportsSecureCoding;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;

@end

