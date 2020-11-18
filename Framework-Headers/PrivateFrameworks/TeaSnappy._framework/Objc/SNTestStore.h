//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaSnappy/SNTestRunFactory-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SNTestStore : NSObject <SNTestRunFactory>
{
    NSMutableArray *_testSuites;
    NSMutableDictionary *_testCases;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *testCases; // @synthesize testCases=_testCases;
@property (readonly, nonatomic) NSMutableArray *testSuites; // @synthesize testSuites=_testSuites;

- (void).cxx_destruct;
- (void)addTestCase:(id)arg1;
- (void)addTestSuite:(id)arg1;
- (id)init;
- (id)testRunForTestName:(id)arg1;

@end
