//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface UMUserSwitchContext : NSObject
{
    BOOL _secondaryActionRequired;
    NSData *_setupData;
    NSString *_shortLivedToken;
    NSDictionary *_environmentsByServices;
}

@property (copy, nonatomic) NSDictionary *environmentsByServices; // @synthesize environmentsByServices=_environmentsByServices;
@property (nonatomic) BOOL secondaryActionRequired; // @synthesize secondaryActionRequired=_secondaryActionRequired;
@property (copy, nonatomic) NSData *setupData; // @synthesize setupData=_setupData;
@property (copy, nonatomic) NSString *shortLivedToken; // @synthesize shortLivedToken=_shortLivedToken;

+ (id)contextWithDataRepresentation:(id)arg1;
+ (id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(BOOL)arg3;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)description;
- (id)dictRepresentation;

@end
