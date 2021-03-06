/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UITableViewRowData, UITableView, NSMutableIndexSet, UIView, NSMutableArray;

@interface _UITableViewUpdateSupport : NSObject  {
    int oldSection;
    int newSection;
    int oldGlobalRow;
    int newGlobalRow;
    UITableView *tableView;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } oldRowRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } newRowRange;
    NSMutableIndexSet *rows;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } oldTableViewVisibleBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } newTableViewVisibleBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } tableViewVisibleBoundsUnion;
    float tableViewVisibleBoundsOffset;
    int oldSectionCount;
    int newSectionCount;
    int *oldSectionMap;
    int *newSectionMap;
    int oldGlobalRowCount;
    int newGlobalRowCount;
    int *oldGlobalRowMap;
    int *newGlobalRowMap;
    UIView **animatedCells;
    UIView **animatedHeaders;
    UIView **animatedFooters;
    int globalReorderingRow;
    id _context;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
}


- (void)_validateAnimatedCells;
- (BOOL)_isReloadSectionUpdate;
- (void)_computeVisibleBounds;
- (void)_computeSectionUpdates;
- (void)_computeRowUpdates;
- (void)_setupAnimationStructures;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupInsertAnimationForHeaderInSection:(int)arg1 withTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForFooterInSection:(int)arg1 withTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (id)_imageViewForView:(id)arg1;
- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1;
- (void)_setupAnimationsForDeletedCells;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupDeleteAnimationForHeaderInSection:(int)arg1 withTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForFooterInSection:(int)arg1 withTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationForTableFooter;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 newRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 context:(id)arg7;
- (void)dealloc;

@end
