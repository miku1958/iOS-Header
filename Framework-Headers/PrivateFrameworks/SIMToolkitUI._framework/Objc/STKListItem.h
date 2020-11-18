//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/BSXPCCoding-Protocol.h>

@class NSString;

@interface STKListItem : NSObject <BSXPCCoding>
{
    NSString *_text;
    BOOL _selected;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isSelected; // @synthesize isSelected=_selected;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 selected:(BOOL)arg2;
- (id)initWithXPCDictionary:(id)arg1;

@end
