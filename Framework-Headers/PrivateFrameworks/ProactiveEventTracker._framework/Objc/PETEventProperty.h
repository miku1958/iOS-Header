//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PETEventProperty : NSObject
{
    NSString *_name;
}

@property (readonly, nonatomic) unsigned long long cardinality;
@property (readonly, nonatomic) NSString *longestValueString;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)freeValuedPropertyWithName:(id)arg1;
+ (id)propertyWithName:(id)arg1 enumMapping:(id)arg2;
+ (id)propertyWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(BOOL)arg3;
+ (id)propertyWithName:(id)arg1 possibleValues:(id)arg2;
+ (id)propertyWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(BOOL)arg3;
+ (id)propertyWithName:(id)arg1 range:(struct _NSRange)arg2;
+ (id)propertyWithName:(id)arg1 range:(struct _NSRange)arg2 clampValues:(BOOL)arg3;
+ (id)propertyWithName:(id)arg1 rangeMin:(unsigned long long)arg2 rangeMax:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (id)possibleValues;
- (struct _NSRange)validRange;

@end
