//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUBonjourDevice, CUNANEndpoint, NSDictionary, NSString;

@interface CUNetServiceEndpoint : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSDictionary *_serviceInfo;
    NSString *_serviceType;
    CUBonjourDevice *_bonjourDevice;
    CUNANEndpoint *_nanEndpoint;
}

@property (strong, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) CUNANEndpoint *nanEndpoint; // @synthesize nanEndpoint=_nanEndpoint;
@property (readonly, copy, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithNANEndpoint:(id)arg1;

@end

