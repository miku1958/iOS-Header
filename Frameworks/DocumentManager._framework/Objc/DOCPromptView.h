//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DocumentManager/DOCAppearanceProtocol-Protocol.h>

@class NSString, UILabel;

@interface DOCPromptView : UIView <DOCAppearanceProtocol>
{
    UILabel *_label;
    NSString *_promptText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)updateAppearance:(id)arg1;

@end

