//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCollectionElement.h>

@class NSString;

@interface IKGridElement : IKCollectionElement
{
    BOOL _paged;
}

@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic, getter=isPaged) BOOL paged; // @synthesize paged=_paged;
@property (readonly, nonatomic) unsigned long long rowCount;
@property (readonly, nonatomic) NSString *rowHeight;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

