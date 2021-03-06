//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UISwitch;

__attribute__((visibility("hidden")))
@interface CKDetailsChatOptionsCell : CKDetailsCell <CKDetailsCell>
{
    UISwitch *_controlSwitch;
}

@property (strong, nonatomic) UISwitch *controlSwitch; // @synthesize controlSwitch=_controlSwitch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)estimatedHeight;
+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

