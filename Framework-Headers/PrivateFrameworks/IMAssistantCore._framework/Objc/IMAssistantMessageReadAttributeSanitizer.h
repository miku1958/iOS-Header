//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/IMAssistantMessageAttributeSanitizer-Protocol.h>

@class NSString;

@interface IMAssistantMessageReadAttributeSanitizer : NSObject <IMAssistantMessageAttributeSanitizer>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)sanitize:(unsigned long long)arg1;

@end
