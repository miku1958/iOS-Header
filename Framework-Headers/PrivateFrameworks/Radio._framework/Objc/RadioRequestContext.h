//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>

@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying>
{
    SSVFairPlaySAPSession *_SAPSession;
    BOOL _usesLocalNetworking;
}

@property (strong, nonatomic) SSVFairPlaySAPSession *SAPSession; // @synthesize SAPSession=_SAPSession;
@property (nonatomic) BOOL usesLocalNetworking; // @synthesize usesLocalNetworking=_usesLocalNetworking;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

