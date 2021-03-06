//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDialogRequest.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString, WFDatePickerConfiguration, WFDialogButton;

@interface WFInputDateDialogRequest : WFDialogRequest <NSSecureCoding>
{
    WFDatePickerConfiguration *_configuration;
    NSString *_message;
    WFDialogButton *_cancelButton;
    WFDialogButton *_doneButton;
}

@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property (readonly, copy, nonatomic) WFDatePickerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // @synthesize doneButton=_doneButton;
@property (readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatePickerConfiguration:(id)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4;

@end

