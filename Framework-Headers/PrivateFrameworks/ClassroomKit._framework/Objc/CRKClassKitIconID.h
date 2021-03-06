//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKClassKitIconID : NSObject
{
    NSString *_mascotIdentifier;
    NSString *_colorIdentifier;
}

@property (copy, nonatomic) NSString *colorIdentifier; // @synthesize colorIdentifier=_colorIdentifier;
@property (copy, nonatomic) NSString *mascotIdentifier; // @synthesize mascotIdentifier=_mascotIdentifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)stringBySanitizingString:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithClass:(id)arg1;
- (id)initWithIconID:(id)arg1;
- (id)initWithMascotIdentifier:(id)arg1 colorIdentifier:(id)arg2;

@end

