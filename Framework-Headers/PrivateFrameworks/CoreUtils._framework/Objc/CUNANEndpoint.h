//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CUNANEndpoint : NSObject
{
    int _port;
    NSString *_identifier;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_textInfo;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) int port; // @synthesize port=_port;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (readonly, copy, nonatomic) NSDictionary *textInfo; // @synthesize textInfo=_textInfo;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;

@end
