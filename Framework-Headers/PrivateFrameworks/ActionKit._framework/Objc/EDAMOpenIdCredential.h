//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMOpenIdCredential : FATObject
{
    NSString *_tokenPayload;
    NSNumber *_serviceProvider;
}

@property (strong, nonatomic) NSNumber *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property (strong, nonatomic) NSString *tokenPayload; // @synthesize tokenPayload=_tokenPayload;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end

