//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HMDWakeConfigurationParameters : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_delimiter;
    NSData *_primaryIdentifier;
    NSMutableArray *_secondaryIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSData *delimiter; // @synthesize delimiter=_delimiter;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSData *primaryIdentifier; // @synthesize primaryIdentifier=_primaryIdentifier;
@property (strong, nonatomic) NSMutableArray *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDelimiter:(id)arg1 primaryIdentifier:(id)arg2 secondaryIdentifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

