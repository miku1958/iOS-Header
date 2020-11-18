//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUITableFooterDelegate-Protocol.h>
#import <RemoteUI/RUITableHeaderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, RUITableViewRow, UIView;
@protocol RUITableViewSectionDelegate, RemoteUITableFooter, RemoteUITableHeader;

@interface RUITableViewSection : RUIElement <RUITableHeaderDelegate, RUITableFooterDelegate>
{
    NSMutableArray *_rows;
    long long _disclosureLimit;
    NSNumber *_drawsTopSeparator;
    BOOL _configured;
    id<RUITableViewSectionDelegate> _delegate;
    UIView<RemoteUITableHeader> *_headerView;
    UIView<RemoteUITableFooter> *_footerView;
    double _headerHeight;
    double _footerHeight;
    RUITableViewRow *_showAllRow;
    NSString *_headerText;
    NSDictionary *_headerAttributes;
    NSString *_HTMLHeaderContent;
    NSString *_detailHeaderText;
    NSString *_subHeaderText;
    NSDictionary *_subHeaderAttributes;
    NSString *_footerText;
    NSString *_HTMLFooterContent;
    NSDictionary *_footerAttributes;
}

@property (copy, nonatomic) NSString *HTMLFooterContent; // @synthesize HTMLFooterContent=_HTMLFooterContent;
@property (copy, nonatomic) NSString *HTMLHeaderContent; // @synthesize HTMLHeaderContent=_HTMLHeaderContent;
@property (nonatomic) BOOL configured; // @synthesize configured=_configured;
@property (weak, nonatomic) id<RUITableViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSString *detailHeaderText; // @synthesize detailHeaderText=_detailHeaderText;
@property (nonatomic) BOOL drawTopSeparator;
@property (copy, nonatomic) NSDictionary *footerAttributes; // @synthesize footerAttributes=_footerAttributes;
@property (nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property (copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property (strong, nonatomic) UIView<RemoteUITableFooter> *footerView; // @synthesize footerView=_footerView;
@property (copy, nonatomic) NSDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property (nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property (copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property (strong, nonatomic) UIView<RemoteUITableHeader> *headerView; // @synthesize headerView=_headerView;
@property (readonly, nonatomic) NSArray *rows;
@property (strong, nonatomic) RUITableViewRow *showAllRow; // @synthesize showAllRow=_showAllRow;
@property (copy, nonatomic) NSDictionary *subHeaderAttributes; // @synthesize subHeaderAttributes=_subHeaderAttributes;
@property (copy, nonatomic) NSString *subHeaderText; // @synthesize subHeaderText=_subHeaderText;

- (void).cxx_destruct;
- (Class)_customFooterClass;
- (Class)_customHeaderClass;
- (void)addRow:(id)arg1;
- (id)colorFromAttributeString:(id)arg1;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (BOOL)hasCustomFooter;
- (BOOL)hasCustomHeader;
- (BOOL)hasValueForDrawsTopSeparator;
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)init;
- (void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (void)setAttributes:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (id)sourceURL;
- (id)subElementsWithName:(id)arg1;
- (void)tappedShowAllRowWithTable:(id)arg1;

@end
