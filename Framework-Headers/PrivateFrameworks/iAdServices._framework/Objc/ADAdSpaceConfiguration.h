//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSCopying-Protocol.h>
#import <iAdServices/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSURL;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    int _creativeType;
    float _containerWidth;
    float _containerHeight;
    float _reorientedContainerWidth;
    float _reorientedContainerHeight;
    long long _options;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    NSSet *_context;
    NSString *_adSpaceContextJSON;
}

@property (copy, nonatomic) NSString *adSpaceContextJSON; // @synthesize adSpaceContextJSON=_adSpaceContextJSON;
@property (strong, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property (strong, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property (nonatomic) float containerHeight; // @synthesize containerHeight=_containerHeight;
@property (nonatomic) float containerWidth; // @synthesize containerWidth=_containerWidth;
@property (copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property (nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long options; // @synthesize options=_options;
@property (nonatomic) float reorientedContainerHeight; // @synthesize reorientedContainerHeight=_reorientedContainerHeight;
@property (nonatomic) float reorientedContainerWidth; // @synthesize reorientedContainerWidth=_reorientedContainerWidth;
@property (strong, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

