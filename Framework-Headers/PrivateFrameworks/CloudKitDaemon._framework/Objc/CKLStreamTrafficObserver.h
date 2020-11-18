//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKLStreamTrafficObserver : CKLStreamObserver
{
    CDUnknownBlockType _requestParsedBlock;
    NSMutableDictionary *_requestDictionary;
    NSObject<OS_dispatch_queue> *_printQueue;
}

@property (strong) NSObject<OS_dispatch_queue> *printQueue; // @synthesize printQueue=_printQueue;
@property (strong) NSMutableDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property (copy, nonatomic) CDUnknownBlockType requestParsedBlock; // @synthesize requestParsedBlock=_requestParsedBlock;

- (void).cxx_destruct;
- (void)eventMatched:(id)arg1;
- (void)finish;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (void)parseRequestArrayAndPrint:(id)arg1;
- (id)parserFromConfigurationMessage:(id)arg1;

@end
