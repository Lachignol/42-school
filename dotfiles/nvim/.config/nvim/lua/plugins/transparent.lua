return {
  "xiyaowong/transparent.nvim",
  lazy = false,  -- Ne pas lazy loader pour que la transparence soit effective
  opts = {
    -- Groupes de highlight à rendre transparents (par défaut)
    groups = {
      "Normal", "NormalNC", "Comment", "Constant", "Special", "Identifier",
      "Statement", "PreProc", "Type", "Underlined", "Todo", "String",
      "Function", "Conditional", "Repeat", "Operator", "Structure",
      "LineNr", "NonText", "SignColumn", "CursorLine", "CursorLineNr",
      "StatusLine", "StatusLineNC", "EndOfBuffer",
    },
    -- Groupes supplémentaires à rendre transparents (exemple pour Lazy, Mason, NvimTree)
    extra_groups = { "NormalFloat", "NvimTreeNormal" },
    exclude_groups = {},
    on_clear = function() end,
  },
  config = function(_, opts)
    require("transparent").setup(opts)
  end,
}

