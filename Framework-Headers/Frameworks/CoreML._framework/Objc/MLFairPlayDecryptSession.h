//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol CoreMLModelSecurityProtocol;

@interface MLFairPlayDecryptSession : NSObject
{
    NSString *_modelPath;
    NSXPCConnection *_xpcConnection;
    NSObject<CoreMLModelSecurityProtocol> *_xpcProxy;
}

@property (copy, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property (strong, nonatomic) NSObject<CoreMLModelSecurityProtocol> *xpcProxy; // @synthesize xpcProxy=_xpcProxy;

+ (id)decryptSessionForModelAtPath:(id)arg1 keyBlob:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)dealloc;

@end
