//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKUIComposeTextFieldConfiguration : NSObject
{
    struct UIEdgeInsets _borderInsets;
    long long _columnIndex;
    BOOL _isRequired;
    NSString *_label;
    unsigned long long _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property (nonatomic) struct UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
@property (nonatomic) long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property (copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property (nonatomic, getter=isRequired) BOOL required; // @synthesize required=_isRequired;
@property (copy, nonatomic) NSString *value; // @synthesize value=_value;

- (void).cxx_destruct;

@end

