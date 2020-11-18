//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKObjectProperty : NSObject
{
    NSString *_name;
    NSString *_variableName;
    Class _aClass;
    unsigned long long _type;
    NSString *_valueGetter;
}

@property (readonly, copy, nonatomic) Class aClass; // @synthesize aClass=_aClass;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, copy, nonatomic) NSString *valueGetter; // @synthesize valueGetter=_valueGetter;
@property (readonly, copy, nonatomic) NSString *variableName; // @synthesize variableName=_variableName;

- (void).cxx_destruct;
- (id)initWithProperty:(struct objc_property *)arg1;

@end

