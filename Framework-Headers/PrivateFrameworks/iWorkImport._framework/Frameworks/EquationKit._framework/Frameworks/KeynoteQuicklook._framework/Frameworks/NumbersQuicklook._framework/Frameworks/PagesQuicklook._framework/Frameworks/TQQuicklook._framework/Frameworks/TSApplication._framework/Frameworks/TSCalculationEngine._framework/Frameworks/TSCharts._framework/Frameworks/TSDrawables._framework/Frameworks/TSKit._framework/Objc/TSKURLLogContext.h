//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSKit/TSULogContext-Protocol.h>

@class NSString, NSURL;

@interface TSKURLLogContext : NSObject <TSULogContext>
{
    NSURL *_url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *privateString;
@property (readonly) NSString *publicString;
@property (readonly) Class superclass;

+ (id)logContextWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end

