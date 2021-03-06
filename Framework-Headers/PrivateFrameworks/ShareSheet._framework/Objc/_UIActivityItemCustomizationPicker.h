//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/_UIActivityItemCustomization.h>

#import <ShareSheet/_UIActivityItemCustomizationPicker-Protocol.h>

@class NSArray, NSString;

@interface _UIActivityItemCustomizationPicker : _UIActivityItemCustomization <_UIActivityItemCustomizationPicker>
{
    long long _selectedOptionIndex;
    long long _previousSelectedOptionIndex;
    NSArray *_optionTitles;
    CDUnknownBlockType __handler;
}

@property (copy, nonatomic, setter=_setHandler:) CDUnknownBlockType _handler; // @synthesize _handler=__handler;
@property (readonly, nonatomic) NSArray *_optionTitles; // @synthesize _optionTitles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long previousSelectedOptionIndex;
@property (readonly, nonatomic) long long selectedOptionIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSelectedOptionIndex:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 optionTitles:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4;

@end

