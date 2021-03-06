//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface PHResourceRequest : NSObject <NSSecureCoding>
{
    BOOL _wantsProgress;
    NSString *_taskIdentifier;
    NSURL *_assetObjectIDURL;
}

@property (readonly, nonatomic) NSURL *assetObjectIDURL; // @synthesize assetObjectIDURL=_assetObjectIDURL;
@property (readonly, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property (nonatomic) BOOL wantsProgress; // @synthesize wantsProgress=_wantsProgress;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectIDURL:(id)arg2;

@end

