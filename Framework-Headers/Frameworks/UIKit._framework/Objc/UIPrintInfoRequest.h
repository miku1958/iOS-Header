//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : NSObject
{
    PKPrinter *_printer;
    int _requestState;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) int requestState; // @synthesize requestState=_requestState;

+ (id)requestInfoForPrinter:(id)arg1;
- (void).cxx_destruct;
- (void)requestPrintInfo;

@end

