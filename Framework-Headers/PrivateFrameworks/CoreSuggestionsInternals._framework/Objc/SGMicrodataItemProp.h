//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SGMicrodataItem;

@interface SGMicrodataItemProp : NSObject
{
    NSString *_propertyName;
    NSString *_stringValue;
    SGMicrodataItem *_itemValue;
}

@property (readonly, nonatomic) SGMicrodataItem *itemValue; // @synthesize itemValue=_itemValue;
@property (readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property (readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

