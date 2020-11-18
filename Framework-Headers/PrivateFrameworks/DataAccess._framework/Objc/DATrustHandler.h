//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol DATrustHandlerDelegate;

@interface DATrustHandler : NSObject
{
    id<DATrustHandlerDelegate> _delegate;
    NSMutableDictionary *_haveWarnedAboutCertDict;
}

@property (weak, nonatomic) id<DATrustHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableDictionary *haveWarnedAboutCertDict; // @synthesize haveWarnedAboutCertDict=_haveWarnedAboutCertDict;

- (void).cxx_destruct;
- (int)_actionForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;
- (id)_serverSuffixesToAlwaysFail;
- (void)handleTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 forAccount:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (BOOL)handleTrustChallenge:(id)arg1 forAccount:(id)arg2;
- (BOOL)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (BOOL)resetCertWarnings;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;

@end

