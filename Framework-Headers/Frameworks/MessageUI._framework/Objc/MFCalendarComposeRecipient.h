//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient
{
    NSString *_calAttendeeName;
    id _participant;
}

@property (strong, nonatomic) id participant;

- (void).cxx_destruct;
- (id)displayString;
- (unsigned long long)hash;
- (id)initWithComposeRecipient:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setCalAttendeeName:(id)arg1;

@end

