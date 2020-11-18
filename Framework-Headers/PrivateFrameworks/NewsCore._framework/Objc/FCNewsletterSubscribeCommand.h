//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCNewsletterSubscribeCommand : FCCommand
{
    NSString *_newsletter;
}

@property (copy, nonatomic) NSString *newsletter; // @synthesize newsletter=_newsletter;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNewsletter:(id)arg1;

@end
