//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/UIItemProviderReading-Protocol.h>

@class NSArray, NSString;

@interface MFComposeRecipients : NSObject <UIItemProviderReading>
{
    NSArray *_recipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property (readonly) Class superclass;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
- (id)initWithRecipients:(id)arg1;

@end
