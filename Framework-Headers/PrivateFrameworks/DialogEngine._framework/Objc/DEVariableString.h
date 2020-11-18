//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DialogEngine/DEVariable.h>

@class NSString;

@interface DEVariableString : DEVariable
{
}

@property (readonly) NSString *printValue;
@property (readonly) NSString *speakValue;

- (id)init;
- (id)initWithName:(id)arg1 print:(id)arg2 speak:(id)arg3;
- (id)initWithName:(id)arg1 string:(id)arg2;
- (id)initWithSharedPtr:(shared_ptr_695b9c0c *)arg1;
- (void)setValuePrint:(id)arg1 speak:(id)arg2;

@end
