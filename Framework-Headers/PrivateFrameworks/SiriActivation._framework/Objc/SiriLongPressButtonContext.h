//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SiriContext.h>

@interface SiriLongPressButtonContext : SiriContext
{
    double _buttonDownTimestamp;
}

@property (nonatomic) double buttonDownTimestamp; // @synthesize buttonDownTimestamp=_buttonDownTimestamp;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
