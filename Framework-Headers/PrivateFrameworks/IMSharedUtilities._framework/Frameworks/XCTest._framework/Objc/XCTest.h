//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCTestRun;

@interface XCTest : NSObject
{
    id _internal;
}

@property (readonly) NSString *_classNameForReporting;
@property (readonly) NSString *_methodNameForReporting;
@property (readonly) Class _requiredTestRunBaseClass;
@property (readonly) NSString *languageAgnosticTestClassName;
@property (readonly) NSString *languageAgnosticTestMethodName;
@property (readonly, copy) NSString *name;
@property (readonly) NSString *nameForLegacyLogging;
@property (readonly) unsigned long long testCaseCount;
@property (readonly) XCTestRun *testRun;
@property (readonly) Class testRunClass;

+ (id)languageAgnosticTestClassNameForTestClass:(Class)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)performTest:(id)arg1;
- (void)removeTestsWithNames:(id)arg1;
- (void)runTest;
- (void)setUp;
- (void)tearDown;

@end
