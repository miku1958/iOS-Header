//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class NSString, RUIPage;

@interface RUIPageElement : RUIElement
{
    RUIPage *_page;
}

@property (nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) RUIPage *page; // @synthesize page=_page;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)staticValues;

@end
