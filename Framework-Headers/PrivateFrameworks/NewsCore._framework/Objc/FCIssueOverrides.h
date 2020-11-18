//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCIssueOverrides : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_issueDescription;
}

@property (readonly, nonatomic) NSString *issueDescription; // @synthesize issueDescription=_issueDescription;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 issueDescription:(id)arg2;

@end
