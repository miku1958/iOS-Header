//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource;

@interface SAUTSContentDetailPage : SAAceView
{
}

@property (copy, nonatomic) NSString *contentType;
@property (strong, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSString *utsId;

+ (id)contentDetailPage;
+ (id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

