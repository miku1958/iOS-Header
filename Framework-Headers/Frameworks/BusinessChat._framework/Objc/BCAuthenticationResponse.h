//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChat/BCDictionaryImageSerializable-Protocol.h>

@class BCError, NSArray, NSDictionary, NSString;

@interface BCAuthenticationResponse : NSObject <BCDictionaryImageSerializable>
{
    NSString *_status;
    NSString *_token;
    NSArray *_errors;
}

@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) BCError *error;
@property (strong, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property (nonatomic) NSString *status; // @synthesize status=_status;
@property (strong, nonatomic) NSString *token; // @synthesize token=_token;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)initWithToken:(id)arg1 error:(id)arg2;

@end

