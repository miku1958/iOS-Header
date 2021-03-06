//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AMSPromise, NSError, NSString, NSURL;

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    NSString *_bundleIdentifier;
    NSURL *_privacyPolicyURL;
    NSError *_error;
    AMSPromise *_outstandingPromise;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy) NSError *error; // @synthesize error=_error;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (strong) AMSPromise *outstandingPromise; // @synthesize outstandingPromise=_outstandingPromise;
@property (copy) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;

- (void).cxx_destruct;
- (void)_performLookup;
- (void)cancel;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (BOOL)isAsynchronous;
- (void)start;

@end

