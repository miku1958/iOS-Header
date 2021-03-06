//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DialogEngine/NSURLSessionDelegate-Protocol.h>

@class NSString, NSURLSession;

@interface DEInvalidateDelegate : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_urlSession;
    NSString *_distribution;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *distribution; // @synthesize distribution=_distribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;

@end

