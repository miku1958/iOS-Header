//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKFormPeripheral-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKFormInputControl : NSObject <WKFormPeripheral>
{
    struct RetainPtr<id<WKFormControl>> _control;
}

@property (readonly, nonatomic) NSString *dateTimePickerCalendarType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)assistantView;
- (void)beginEditing;
- (void)endEditing;
- (id)initWithView:(id)arg1;

@end

