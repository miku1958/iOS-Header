//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, UIImage;

@interface SFAirDropPayload : NSObject
{
    BOOL _wasString;
    NSURL *_URL;
    NSData *_data;
    NSString *_type;
    UIImage *_previewImage;
    NSString *_payloadDescription;
    long long _identifer;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (nonatomic) long long identifer; // @synthesize identifer=_identifer;
@property (copy, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property (strong, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (nonatomic) BOOL wasString; // @synthesize wasString=_wasString;

+ (id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5;
+ (id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
