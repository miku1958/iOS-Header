//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NTKGreenfieldComplicationSharingOption : NSObject
{
    NSString *_name;
    NSString *_uniqueIdentifier;
    unsigned long long _optionType;
}

@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned long long optionType; // @synthesize optionType=_optionType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)optionWithName:(id)arg1 uniqueIdentifier:(id)arg2 optionType:(unsigned long long)arg3;
- (void).cxx_destruct;

@end

