//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@interface TLKTableColumnAlignment : TLKObject
{
    BOOL _isEqualWidth;
    unsigned long long _columnAlignment;
    long long _dataAlignment;
}

@property unsigned long long columnAlignment; // @synthesize columnAlignment=_columnAlignment;
@property long long dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property BOOL isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;

- (id)description;
- (id)observableProperties;
- (long long)textAlignment;

@end
