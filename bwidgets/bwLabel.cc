#include "bwLabel.h"
#include "bwPainter.h"
#include "bwStyle.h"

using namespace bWidgets;

bwLabel::bwLabel(
        const std::string& text,
        unsigned int position_x, unsigned int position_y,
        unsigned int width, unsigned int height) :
    bwWidget(bwWidget::WIDGET_TYPE_LABEL,
           bwRectangle<unsigned int>(position_x, position_x + width, position_y, position_y + height)),
    text(text)
{
	
}

void bwLabel::onClick()
{
	/* nothing */
}
void bwLabel::mouseEnter()
{
	/* nothing */
}
void bwLabel::mouseLeave()
{
	/* nothing */
}

void bwLabel::draw(bwStyle& style)
{
	bwStyle::WidgetStyle& widget_style = style.widget_style;
	bwPainter painter;

	style.setWidgetStyle(*this);

	painter.setActiveColor(widget_style.text_color);
	painter.drawText(text, rectangle, bwPainter::text_draw_arg);
}
